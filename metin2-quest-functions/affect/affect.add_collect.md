# affect.add_collect()
Функция **affect.add_collect** дает персонажу пассивные бонусы.

## Parâmetros da função
### bonus
Tipo *number*. **Parâmetro obrigatório**. ID do bónus, который должен быть добавлен.

### value
Tipo *number*. **Parâmetro obrigatório**. Valor do bónus. Por exemplo, deve especificar `5000`, se quiser dar ao jogador 5000 de Vida.

### duration
Tipo *number*. **Parâmetro obrigatório**. Duração do bónus em segundos.

## Notas
A função **não** pode ser chamada anonimamente.

Неизвестно, чем эта функция отличается от [affect.add](../affect/affect.add.md)() и [affect.add_collect_point](../affect/affect.add_collect_point.md)().