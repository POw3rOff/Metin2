# warp_all_in_area_to_area()
A função **warp_all_in_area_to_area** teletransporta всех игроков из одной области в другую.

## Parâmetros
### x1_from
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor no eixo X com os dois zeros no final, de onde será feito o teletransporte.

### y1_from
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor no eixo Y com os dois zeros no final, de onde será feito o teletransporte.

### x2_from
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor no eixo X com os dois zeros no final, de onde será feito o teletransporte.

### y2_from
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor no eixo Y com os dois zeros no final, de onde será feito o teletransporte.

### x1_to
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor no eixo X com os dois zeros no final, para onde será feito o teletransporte.

### y1_to
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor no eixo Y com os dois zeros no final, para onde será feito o teletransporte.

### x2_to
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor no eixo X com os dois zeros no final, para onde será feito o teletransporte.

### y2_to
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor no eixo Y com os dois zeros no final, para onde será feito o teletransporte.

## Valores de retorno
### count
Tipo *number*. Количество телепортированных игроков. Se координаты в первых двух параметрах не принадлежат ни одной локации, então é retornado `0`.

## Notas
A função pode ser chamada anonimamente.

Первые 4 parâmetros formam uma área retangular, откуда будут телепортированы все игроки: [x1_from](#x1_from) и [y1_from](#y1_from) &mdash; canto superior esquerdo, а [x2_from](#x2_from) и [y2_from](#y2_from) &mdash; canto inferior direito. Оставшиеся 4 параметра формируют область, в ao qual будут выбраны случайные координаты, куда будет телепортирован каждый игрок.