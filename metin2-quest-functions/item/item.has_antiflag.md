# item.has_antiflag()
A função **item.has_antiflag** verifica se имеет ли &laquo;выделенный&raquo; предмет um determinado `antiflag`.

## Parâmetros da função
### antiflag
Tipo *number*. **Parâmetro obrigatório**. Значение антифлага.

## Valores de retorno
### has_antiflag
Tipo *mixed*. Se o item não tiver sido &laquo;selecionado&raquo; ou se параметр não for um número, então nada é retornado, ou seja `nil`.

Имеет ли предмет um determinado флаг ou нет. `true` <sup>boolean</sup>, se имеет; `false` <sup>boolean</sup>, se не имеет.

## Notas
A função **não** pode ser chamada anonimamente.

Se точнее, então эта функция делает проверку по битовой маске. Существуют следующие коды антифлагов:

| antiflag | Название | Назначение |
| --- | --- | --- |
| 1 | ITEM_ANTIFLAG_FEMALE | Запрещает женским персонажам использовать этот предмет |
| 2 | ITEM_ANTIFLAG_MALE | Запрещает мужским персонажам использовать этот предмет |
| 4 | ITEM_ANTIFLAG_WARRIOR | Запрещает войнам использовать этот предмет |
| 8 | ITEM_ANTIFLAG_ASSASSIN | Запрещает ниндзя использовать этот предмет |
| 16 | ITEM_ANTIFLAG_SURA | Запрещает сурам использовать этот предмет |
| 32 | ITEM_ANTIFLAG_SHAMAN | Запрещает шаманам использовать этот предмет |
| 64 | ITEM_ANTIFLAG_GET | Запрещает передавать этот предмет через торг |
| 128 | ITEM_ANTIFLAG_DROP | Запрещает выбрасывать этот предмет |
| 256 | ITEM_ANTIFLAG_SELL | Этот предмет нельзя будет продать торговцам-NPC |
| 512 | ITEM_ANTIFLAG_EMPIRE_A | Запрещает использовать этот предмет персонажам из красной империи (Шиньзо) |
| 1024 | ITEM_ANTIFLAG_EMPIRE_B | Запрещает использовать этот предмет персонажам из желтой империи (Хунджо) |
| 2048 | ITEM_ANTIFLAG_EMPIRE_C | Запрещает использовать этот предмет персонажам из синей империи (Джинно) |
| 4096 | ITEM_ANTIFLAG_SAVE | неизвестно |
| 8192 | ITEM_ANTIFLAG_GIVE | неизвестно |
| 16384 | ITEM_ANTIFLAG_PKDROP | Этот предмет не может выпасть из игрока при смерти с отрицательным рангом |
| 32768 | ITEM_ANTIFLAG_STACK | Этот предмет не может быть сложен в пачку |
| 65536 | ITEM_ANTIFLAG_MYSHOP | Этот предмет не может быть продан через узелок (собственный магазин) |
| 131072 | ITEM_ANTIFLAG_SAFEBOX | Этот предмет не может быть положен на склад |
| 262144 | ITEM_ANTIFLAG_WOLFMAN | Этот предмет не может быть использован ликаном |

Битовая маска получается путем сложения всех необходимых кодов. Например, маска `6` означает, что предмет не смогут использовать воины (`4`) мужского пола (`2`), итого 2 + 4 = 6. Каждая битовая маска уникальна, поэтому по маске можно безошибочно определить, имеет ли она um determinado антифлаг ou нет. Например, se параметр `antiflag` у предмета равен `6`, então вызвав функцию `item.has_flag(4)` можно безошибочно узнать, могут ли его использовать воины ou нет.

С помощью функции [item.get_antiflag](../item/item.get_antiflag.md)() можно узнать значение антифлага.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).