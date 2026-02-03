# game.drop_item_with_ownership()
A função **game.drop_item_with_ownership** cria возле игрока предмет с привязанным именем. Это значит, что этот предмет в течение некоторого времени сможет поднять только этот игрок.

## Parâmetros da função
### item_vnum
Tipo *number*. **Parâmetro obrigatório**. ID do item.

### count
Tipo *number*. Количество предметов. Se параметр não foi definido, então количество будет равняться `1`.

### player_id
Tipo *number*. ID игрока, имя которого будет отображаться возле предмета. Se параметр не задан, então в качестве ID будет указан ID игрока, который вызвал эту функцию.

## Notas
A função **não** pode ser chamada anonimamente.

Предмет создается на координатах игрока &plusmn; 2 единицы.