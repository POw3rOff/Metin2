# getnpcid()
A função **getnpcid** informa ID NPC по его имени.

## Parâmetros da função
### npc_name
Tipo *string*. **Parâmetro obrigatório**. Имя NPC.

## Valores de retorno
### npc_vnum
Tipo *number*. ID NPC. Se такого NPC não existe, então é retornado `0`.

## Notas
A função pode ser chamada anonimamente.

Неизвестно, сработает ли эта функция, se указать ID do monstro.