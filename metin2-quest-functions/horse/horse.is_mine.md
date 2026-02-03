# horse.is_mine()
A função **horse.is_mine** verifica se принадлежит ли лошадь игроку ou нет.

## Valores de retorno
### is_mine
Tipo *boolean*. Является ли игрок, que chamou a função, владельцем лошади. `true`, se является; `false`, se не является владельцем, se NPC не является лошадью ou se лошадь не была выделена через триггеры [chat](../_triggers/chat.md), [take](../_triggers/take.md) ou любым другим способом.

## Notas
A função **não** pode ser chamada anonimamente.