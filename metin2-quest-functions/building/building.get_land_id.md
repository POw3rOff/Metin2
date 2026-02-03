# building.get_land_id()
A função **building.get_land_id** informa ID земли гильдии, находящейся на определенных координатах.

## Parâmetros da função
### map_index
Tipo *number*. **Parâmetro obrigatório**. Índice do mapa, в ao qual располагается земля.

### x
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor no eixo X, которая указывает на часть земельного участка (com os dois zeros no final).

### y
Tipo *number*. **Parâmetro obrigatório**. Coordenada do servidor no eixo Y, которая указывает на часть земельного участка (com os dois zeros no final).

## Valores de retorno
### land_id
Tipo *number*. ID земли. Se земля не была найдена ou se один из переданных ей параметров não for um número, então é retornado `0`.

## Notas
A função pode ser chamada anonimamente.

Параметры [x](#x) и [y](#y) не обязательно должны указывать на центр земельного участка. Достаточно указать любую координату, которая находится в зоне земли гильдии.