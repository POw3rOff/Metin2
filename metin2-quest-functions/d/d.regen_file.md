# d.regen_file()
Функция **d.regen_file** исполняет regen-файл один раз.

## Parâmetros da função
### path
Tipo *string*. **Parâmetro obrigatório**. Caminho para o ficheiro regen. Pode especificar o caminho completo ou relativo. O caminho relativo deve ser especificado em relação ao diretório, onde o núcleo do jogo está localizado.

## Notas
A função pode ser chamada anonimamente.

В отличие от функции [d.set_regen_file](../d/d.set_regen_file.md)(), монстры, вызванные через эту функцию, появляются всего один раз независимо от того, что указано в настройках regen-файла (возможны неточности).

Esta função funciona apenas em masmorras.