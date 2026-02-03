# item.get_wearflag()
A função **item.get_wearflag** informa `wearflag` &laquo;выделенного&raquo; предмета.

## Valores de retorno
### wearflag
Tipo *number*. `wearflag` предмета. Se o item não tiver sido &laquo;selecionado&raquo;, então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.

Существуют следующие значения `wearflag`:

| wearflag | Nome da flag | Назначение |
| --- | --- | --- |
| 0 | — | Предмет никуда не надевается |
| 1 | WEARABLE_BODY | Предмет надевается в слот для брони |
| 2 | WEARABLE_HEAD | Предмет надевается в слот для шлемов |
| 4 | WEARABLE_FOOTS | Предмет надевается в слот для обуви |
| 8 | WEARABLE_WRIST | Предмет надевается в слот для браслетов |
| 16 | WEARABLE_WEAPON | Предмет надевается в слот для оружия |
| 32 | WEARABLE_NECK | Предмет надевается в слот для ожерелий |
| 64 | WEARABLE_EAR | Предмет надевается в слот для серег |
| 128 | WEARABLE_UNIQUE | неизвестно |
| 256 | WEARABLE_SHIELD | Предмет надевается в слот для щитов |
| 512 | WEARABLE_ARROW | Предмет надевается в слот для стрел |
| 1024 | WEARABLE_HAIR | Неизвестно. Этот флаг не имеет назначений в ядре |
| 2048 | WEARABLE_ABILITY | неизвестно |
| 4096 | WEARABLE_COSTUME_BODY | неизвестно |

 Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).