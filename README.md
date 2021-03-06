Automated Testing the Correctness and Reliability of C Decompilers

Reference from ISSTA'20 Artifact for: How Far We Have Come: Testing Decompilation Correctness of C Decompilers


## 1. Code Structure
* `fuzzer.py`: main component to initialize a fuzzing test campaign by calling functions in this script
* `generator.py`: to compile and decompile files (to interact with Radare2 and IDA-Pro, we provide two scripts as follows; the other two decompilers can be used directly via command line)
    * `R2_decompile.py`: to decompile with Radare2/Ghidra 
    * `IDA_decompile.py` and `idapy_decompile.py`: to decompile with IDA (IDA-Pro is not provided in this Artifact Evaluation Package; see clarifications below)
* `EMI_generator.py`: to generate EMI variants
    * `MySQL_connector.py`: to connect MySQL, which is used in the implementation of EMI mutation
    * `CFG_measurer.py`: to measure CFG distance of two programs (used for EMI mutation)
    * `ENV_Profiler.py`: to provide live code EMI mutation function
    * `ContextTable.py`: context structure
* `replacer.py`: to replace main() in original code with decompilation result
    * `modifier.py`: to replace custom macros in decompilation results
* `checker.py`: to compare the output of the two programs for consistency
* `Config.py`: constant values/strings/paths
* `fixFile.py`: enter the parameters to add the options of decompilers
* `terminal.py`: the user interface of DecFuzzer

## 2. Installation of Software and Environment Settings.

For this project I used the 64-bit Ubuntu 18.04 opeartion system to do as recommended from the developer of DecFuzzer.

2.4.1 Download the libraries and tools:

sudo apt install gcc-multilib -- GNU Compiler Collection 

sudo apt install m4 -- The component M4 of GNU Compiler Collection 

sudo apt install openssl libssl-dev -y -- Secure Socket Layer

sudo apt install flex bison -- Lexical analyzar and Yet Another Compiler Compiler sudo apt install pkg-config -- Return basic information of installed libraries

sudo apt install pyqt5 -- Designer of User Interface

sudo apt install jinja2 -- For the development of FixFlie

2.4.2 Install Cmake

We use cmake to generate the c source code which needed for our experiment. Note that Cmake version 3.12 or later is needed to build r2ghidra-dec. 

2.4.3 Configure MySQL which is used in EMI mutation of our experiment. 

apt-get install mysql-server -- MySQL server

service mysql start -- Start MysSQL

sudo cat /etc/mysql/debian.cnf ??? Display then recordthe username and password of MySQL

apt-get install python3-pip & pip3 install PyMySQL -- install the MySQL Driver for Python3


2.4.4 Set Decompilers Radare2

git clone https://github.com/radareorg/radare2;

cd radare2 ; sys/install.sh ; cd ..  

--To install Radare2

r2pm update & r2pm -i r2ghidra-dec -- To further install the Ghidra decompiler plugin

pip3 install r2pipe -- install r2pipe to use the decompiler script R2_decompile.py

2.4.5 Set Decompilers RetDec

Download and unpack the pre-built RetDec (ver. 4.0) for Ubuntu, then you can use retdec-decompiler.py under retdec/bin/.

2.4.6 Setup for NewDecFuzzer with UI Design

Clone this repository: git clone https://github.com/hz90937880/NewDecFuzzer.git

Then update the absolute path to csmith runtime runtime_dir and the absolute path to retdec-decompiler.py in Config.py. 

For example: runtime_dir = '/home/hz/DecFuzzer/runtime/'

RetDec_absolute_path = '/home/hz/Downloads/retdec/retdec-install/bin/retdec-decompiler.py'


### 3. Reproducing experimental results

    python3 run.py

The script `run.py` will run fuzzing test on *RetDec* and *r2ghidra*, separately. It will first test 1000 csmith generated programs in directory `./seed_for_[retdec|r2]`, the result will be stored in `./seed_for_[retdec|r2]/result/` and `./seed_for_[retdec|r2]/error/`, the EMI variants will be stored in `./seed_for_[retdec|r2]/emi/`.

Then it will test all generated EMI variants, the results are stored in a similar manner.

It will take several hours to finish the whole process. While it's unlikely to get exactly the same number (since randomness is involved in generating EMI mutations), it should give a very close number reported in Table 3 in our paper.

### 4. Access to data

Meanwhile, for the ease of understanding/checking our results reported in the paper, We also provide all Csmith generated programs and EMI mutations which can be used to re-produce findings in Table 3, you can download them from [here](https://www.dropbox.com/sh/kqw7e19snfeukai/AADHZ45TAL9Kxi7v9nmdXfLCa?dl=0).

Then, you can reproduce the experiment results using the 'reproduce.py` script we provided. It takes two steps:

**Step 1**

Put all the C source files to be tested in a directory. For instance, to test RetDec, downloading the corresponding folder from Dropbox will result into the following folder structure:

    ???  ~ tree retdec_folder
    retdec_folder
    ????????? cmisth_files
    ???   ????????? error
    ???   ????????? result
    ????????? emi_files
        ????????? error
        ????????? result

Our current results are put inside ???error??? and ???result??? subfolders. So before testing, consider removing those four subfolders.


**Step 2**

Run `./reproduce.py` like:

    python3 ./reproduce.py --decompiler <decompiler name> --files_dir <directory to C files>

For instance, 

    python3 ./reproduce.py --decompiler retdec --files_dir retdec_folder/emi_files

And
 
     python3 ./reproduce.py --decompiler retdec --files_dir retdec_folder/csmith_files


Indeed, `reproduce.py` is designed such that when users want to test our four decompilers, then can specify the `--decompiler` parameter with: `retdec`, `r2`, `jeb` or `ida`. Also, in addition to directly taking EMI or CSmith generated C files as the inputs, `reproduce.py` also provides another option `--EMI` to enable the generation of new EMI variants along the testing. For example:

    python3 ./reproduce.py --decompiler r2 --files_dir ./radare2_folder/csmith_files --emi_dir ./new_seed_for_radare2/emi --EMI

Where `--emi_dir` accompanies `--EMI` to specify the output directory of newly generated EMI variants.

### 5. Interpret Result

As noted in our paper, suppose a C file `10.c` is to be tested, it will be compiled first:

    10.c == compile ==> 10

Then the executable `10` will be decompiled by corresponding decompiler:

    10 == decompile ==> 10_retdec.c or 10_r2.c

We try to generate a new compilable file by replacing `func_1` function in `10.c` with code in `10_retdec.c` or `10_r2.c`:

    10_retdec.c or 10_r2.c == replace ==> 10_new.c == recompile ==> 10_new

If recompilation is failed, the source code is stored in `error` folder and error information is logged in `error/error_log.txt`.

Finally, we compare the outputs of `10` and `10_new`, if they yield different outputs, it will be stored in `result` and logged in `result/result_log.txt`.





