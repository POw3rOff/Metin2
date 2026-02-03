# d.purge_area()
A função **d.purge_area** remove всех монстров и NPC из заданной прямоугольной области.

## Parâmetros da função
### x1
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor sem os dois zeros no final.

### y1
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor sem os dois zeros no final.

### x2
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor sem os dois zeros no final.

### y2
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor sem os dois zeros no final.

## Notas
Não se sabe se esta função pode ser chamada anonimamente.

4 parâmetros formam uma área retangular: [x1](#x1) и [y1](#y1) &mdash; canto superior esquerdo, а [x2](#x2) и [y2](#y2) &mdash; canto inferior direito.

Возможно, что питомцы не удаляются.

Существует аналогичная функция, работающая вне подземелья &mdash; [purge_area](../global/purge_area.md)().

Esta função funciona apenas em masmorras.