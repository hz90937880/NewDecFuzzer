import os
from jinja2 import Template
import sys
import operator

keyword = sys.argv[1]
capitalKeyword = keyword.capitalize()

print(keyword, capitalKeyword)

OUT_DIR = r"/src/fix"
CONFIG_PYTEMP = r"Config.pytemplate"
FUZZER_PYTEMP = r"fuzzer.pytemplate"
GENERATOR_PYTEMP = r"generator.pytemplate"
MODIFIER_PYTEMP = r"modifier.pytemplate"
REPLACER_PYTEMP = r"replacer.pytemplate"

# config
configtemp_file = open(CONFIG_PYTEMP, 'r')
configtemplate = Template(configtemp_file.read())

# fuzzer
fuzzertemp_file = open(FUZZER_PYTEMP, 'r')
fuzzertemplate = Template(fuzzertemp_file.read())

# generator
generatortemp_file = open(GENERATOR_PYTEMP, 'r', encoding='utf-8')
generatortemplate = Template(generatortemp_file.read())

# modifier
modifiertemp_file = open(MODIFIER_PYTEMP, 'r')
modifiertemplate = Template(modifiertemp_file.read())

# replacer.py
replacertemp_file = open(REPLACER_PYTEMP, 'r')
replacertemplate = Template(replacertemp_file.read())

if not os.path.exists(OUT_DIR):
    os.mkdir(OUT_DIR)

os.chdir(OUT_DIR)

###########################################################
fileName = 'Config.py'
fileData = configtemplate.render(keyword=keyword, capitalKeyword=capitalKeyword)

# 创建文件
if not os.path.exists(fileName):
    config_file = open(fileName, 'w')
    config_file.close()
    print(fileName, ' Created !')

# 读取文件
config_file = open(fileName)
config_fileData = config_file.read()
config_file.close()

# 对比文件
if operator.ne(config_fileData, fileData):
    print(fileName, ' Updated !')
    config_file = open(fileName, 'w')
    config_file.write(fileData)
    config_file.close()
else:
    print(fileName, 'Remained !')
####################################################
fileName = 'fuzzer.py'
fileData = fuzzertemplate.render(keyword=keyword, capitalKeyword=capitalKeyword)

# 创建文件
if not os.path.exists(fileName):
    fuzzer_file = open(fileName, 'w')
    fuzzer_file.close()
    print(fileName, ' Created !')

# 读取文件
fuzzer_file = open(fileName)
fuzzer_fileData = fuzzer_file.read()
fuzzer_file.close()

# 对比文件
if operator.ne(fuzzer_fileData, fileData):
    print(fileName, ' Updated !')
    fuzzer_file = open(fileName, 'w')
    fuzzer_file.write(fileData)
    fuzzer_file.close()
else:
    print(fileName, 'Remained !')
####################################################
fileName = 'generator.py'
fileData = generatortemplate.render(keyword=keyword, capitalKeyword=capitalKeyword)

# 创建文件
if not os.path.exists(fileName):
    generator_file = open(fileName, 'w')
    generator_file.close()
    print(fileName, ' Created !')

# 读取文件
generator_file = open(fileName)
generator_fileData = generator_file.read()
generator_file.close()

# 对比文件
if operator.ne(generator_fileData, fileData):
    print(fileName, ' Updated !')
    generator_file = open(fileName, 'w')
    generator_file.write(fileData)
    generator_file.close()
else:
    print(fileName, 'Remained !')
####################################################
fileName = 'modifier.py'
fileData = modifiertemplate.render(keyword=keyword, capitalKeyword=capitalKeyword)

# 创建文件
if not os.path.exists(fileName):
    modifier_file = open(fileName, 'w')
    modifier_file.close()
    print(fileName, ' Created !')

# 读取文件
modifier_file = open(fileName)
modifier_fileData = modifier_file.read()
modifier_file.close()

# 对比文件
if operator.ne(modifier_fileData, fileData):
    print(fileName, ' Updated !')
    modifier_file = open(fileName, 'w')
    modifier_file.write(fileData)
    modifier_file.close()
else:
    print(fileName, 'Remained !')
####################################################
fileName = 'replacer.py'
fileData = replacertemplate.render(keyword=keyword, capitalKeyword=capitalKeyword)

# 创建文件
if not os.path.exists(fileName):
    replacer_file = open(fileName, 'w')
    replacer_file.close()
    print(fileName, ' Created !')

# 读取文件
replacer_file = open(fileName)
replacer_fileData = replacer_file.read()
replacer_file.close()

# 对比文件
if operator.ne(replacer_fileData, fileData):
    print(fileName, ' Updated !')
    replacer_file = open(fileName, 'w')
    replacer_file.write(fileData)
    replacer_file.close()
else:
    print(fileName, 'Remained !')
####################################################


configtemp_file.close()
fuzzertemp_file.close()
generatortemp_file.close()
modifiertemp_file.close()
replacertemp_file.close()


