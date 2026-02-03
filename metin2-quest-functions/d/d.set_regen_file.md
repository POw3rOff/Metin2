# d.set_regen_file()
Функция **d.set_regen_file** подключает regen-файл.

## Parâmetros da função
### path
Tipo *string*. **Parâmetro obrigatório**. Caminho para o ficheiro regen. Pode especificar o caminho completo ou relativo. O caminho relativo deve ser especificado em relação ao diretório, onde o núcleo do jogo está localizado.

## Notas
A função pode ser chamada anonimamente.

В отличие от функции [d.regen_file](../d/d.regen_file.md)(), подключенный через эту функцию regen-файл будет призывать монстров сколько угодно раз согласно настройкам внутри подключенного файла.

Esta função funciona apenas em masmorras.