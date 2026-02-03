# clear_server_timer()
A função **clear_server_timer** remove серверный таймер.

## Parâmetros da função
### timer_name
Tipo *string*. **Parâmetro obrigatório**. Nome do temporizador.

### argument
Tipo *number*. **Parâmetro obrigatório**. Аргумент, используемый в таймере. Подробнее в примечаниях.

## Notas
A função pode ser chamada anonimamente.

Может быть запущено множество серверных таймеров с одинаковым именем, но с разными аргументами. Например, так сделано na Torre dos Demónios &mdash; там могут подниматься одновременно две группы в разных инстансах и они будут использовать таймеры с одинаковыми именами, но аргумент у таймеров &mdash; это ID подземелья ([pc.get_map_index](../pc/pc.get_map_index.md)()). Таким образом, обнулив таймер с аргументом в виде ID подземелья, он обнулится только у одной группы, а не у обеих.

Другими словами, обнуление серверного таймера значит, что триггер [server_timer](../_triggers/server_timer.md) не сработает.