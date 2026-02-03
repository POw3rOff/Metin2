# d.all_near_to()
A função **d.all_near_to** verifica se находятся ли все участники подземелья возле указанных координат.

## Parâmetros da função
### x
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor no eixo X sem os dois zeros no final.

### y
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor no eixo Y sem os dois zeros no final.

## Valores de retorno
### are_nearly
Tipo *boolean*. Находятся ли все игроки возле указанных координат. `true`, se находятся; `false`, se не находятся ou se функция была вызвана вне подземелья.

## Notas
A função pode ser chamada anonimamente.

Координаты всех игроков должны быть ([x](#x) &plusmn; 30, [y](#y) &plusmn; 30).