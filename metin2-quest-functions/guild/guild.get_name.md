# guild.get_name()
A função **guild.get_name** informa o nome da guilda, à qual pertence um ID específico.

## Parâmetros da função
### guild_id
Tipo *number*. **Parâmetro obrigatório**. ID da guilda.

## Valores de retorno
### guild_name
Tipo *string*. Nome da guilda. Se ID da guilda não foi definido, não for um número ou se a guilda com o ID especificado não existir, então é retornado uma string vazia, ou seja `""`.

## Notas
A função pode ser chamada anonimamente.