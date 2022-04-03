# Read in the file
with open('model.h', 'r') as file :
  filedata = file.read()

# Replace the target string
filedata = filedata.replace('à', '=')
filedata = filedata.replace('è', '+')
filedata = filedata.replace('ì', '-')
filedata = filedata.replace('ò', ')')
filedata = filedata.replace('ù', '(')
filedata = filedata.replace('á', '*')
filedata = filedata.replace('é', '&')
filedata = filedata.replace('í', '|')
filedata = filedata.replace('ó', '$')
filedata = filedata.replace('ú', '#')
filedata = filedata.replace('â', '^')
filedata = filedata.replace('ê', '~')
filedata = filedata.replace('î', '{')
filedata = filedata.replace('ô', '}')
filedata = filedata.replace('û', '[')
filedata = filedata.replace('ã', ']')
filedata = filedata.replace('ñ', '<')
filedata = filedata.replace('õ', '>')

# Write the file out again
with open('model_formatter.h', 'w') as file:
  file.write(filedata)
