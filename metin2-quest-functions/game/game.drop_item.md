# game.drop_item()
A função **game.drop_item** cria возле игрока предмет.

## Parâmetros da função
### item_vnum
Tipo *number*. **Parâmetro obrigatório**. ID do item.

### count
Tipo *number*. Количество предметов. Se параметр не задан, então количество будет равно `1`.

## Notas
A função **não** pode ser chamada anonimamente.

Предмет создается без привязки по имени.

Предмет создается на координатах игрока &plusmn; 2 единицы.