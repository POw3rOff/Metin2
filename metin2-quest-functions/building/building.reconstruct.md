# building.reconstruct()
Функция **building.reconstruct** меняет NPC на земле гильдии.

## Parâmetros da função
### npc_vnum
Tipo *number*. **Parâmetro obrigatório**. Vnum NPC, который заменит того NPC, который был &laquo;выделен&raquo; игроком.

## Notas
A função **não** pode ser chamada anonimamente.

Для того, чтобы функция сработала, игроку необходимо &laquo;выделить&raquo; NPC с помощью триггеров [chat](../_triggers/chat.md), [take](../_triggers/take.md) ou любым другим способом.

Поскольку функция не retorna никаких значений, даже в случае ошибки, então рекомендуется самостоятельно всё как следует проверять условиями, чтобы избежать непредвиденных неприятностей (например, падение сервера).

Teoricamente, esta função pode ser executada mesmo que não seja pelo líder da guilda.

Эта функция будет работать только при диалоге с NPC, который имеет привязанный к себе объект за спиной (например, гильдийный кузнец).

Параметр [npc_vnum](#npc_vnum) не может содержать ID NPC, который не имеет привязанный к нему объект в таблице `player.object_proto`.