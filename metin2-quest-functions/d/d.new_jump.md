# d.new_jump()
Функция **d.new_jump** создет подземелье и телепортирует туда игрока, вызвавшего функцию.

## Parâmetros da função
### map_index
Tipo *number*. **Parâmetro obrigatório**. Índice do mapa, onde a masmorra será criada.

### x
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor no eixo X sem os dois zeros no final.

### y
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor no eixo Y sem os dois zeros no final.

## Notas
A função **não** pode ser chamada anonimamente.

Предположительно, на ядре 2089 эта функция будет работать некорректно, но данный diff должен исправить проблему:

````diff
This difference file has been created by IDA Pro
 
game_r2089M_32
00138093: 0C 08
0013809D: 08 04
001380AA: 04 0C
````

Телепортация возможна во время торга.