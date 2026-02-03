# __get_guildid_byname()
A função **__get_guildid_byname** informa ID, который принадлежит гильдии. Поиск происходит по имени гильдии.

## Parâmetros da função
### guild_name
Tipo *string*. **Parâmetro obrigatório**. Nome da guilda.

## Valores de retorno
### guild_id
Tipo *number*. ID da guilda. Se параметр [guild_name](#guild_name) не является строкой, se этот параметр не был указан ou se гильдии с заданным именем não existe, então é retornado `0`.

## Notas
A função pode ser chamada anonimamente.