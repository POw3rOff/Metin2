# arena.add_observer()
A função **arena.add_observer** teletransporta игрока в роли наблюдателя на арену.

## Parâmetros da função
### map_index
Tipo *number*. **Parâmetro obrigatório**. Índice do mapa, onde происходит поединок.

### x
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor no eixo X, куда будет телепортирован наблюдатель (sem os dois zeros no final).

### y
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor no eixo Y, куда будет телепортирован наблюдатель (sem os dois zeros no final).

## Notas
A função **não** pode ser chamada anonimamente.

Получить индекс и координаты, которые можно будет использовать в параметрах этой функции, можно через функцию [arena.get_duel_list](../arena/arena.get_duel_list.md)(). 