# forked.warp_all_in_map()
A função **forked.warp_all_in_map** teletransporta всех игроков из одной локации в другую.

## Parâmetros da função
### map_index_from
Tipo *number*. **Parâmetro obrigatório**. Índice do mapa, из ao qual нужно телепортировать всех игроков.

### map_index_to
Tipo *number*. **Parâmetro obrigatório**. Índice do mapa, в которую нужно телепортировать.

### x
Tipo *number*. **Parâmetro obrigatório**. Coordenada local no eixo X sem os dois zeros no final, куда следует телепортировать всех игроков с локации.

### y
Tipo *number*. **Parâmetro obrigatório**. Coordenada local no eixo Y sem os dois zeros no final, куда следует телепортировать всех игроков с локации.

### time
Tipo *number*. **Parâmetro obrigatório**. Quantidade de segundos, по истечении которых игроки будут телепортированы.

## Notas
A função pode ser chamada anonimamente.

Игроки будут телепортированы не точно на заданные координаты, а с разбросом в 5 координат.