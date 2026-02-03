# mob_vnum()
A função **mob_vnum** informa ID do monstro по его имени.

## Parâmetros da função
### mob_name
Tipo *string*. **Parâmetro obrigatório**. Имя um monstro.

## Valores de retorno
### mob_vnum
Tipo *number*. ID do monstro. Se параметр [mob_name](#mob_name) не является строкой ou se монстр с заданным именем не был найден, então é retornado `0`.

## Notas
A função pode ser chamada anonimamente.