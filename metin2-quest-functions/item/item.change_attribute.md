# item.change_attribute()
Функция **item.change_attribute** меняет бонусы на &laquo;выделенном&raquo; предмете.

## Возвращаемые значения
### status
Тип *mixed*. Если предмет не был &laquo;выделен&raquo;, то ничего не возвращается, то бишь `nil`.

Если бонусы были успешно изменены, то возвращается `true` <sup>boolean</sup>; если была соверешна попытка изменить бонусы на костюме или если на предмете не было бонусов, то возвращается `false` <sup>boolean</sup>.

## Примечания
Функция **не** может быть вызвана анонимно.

Эта функция работает только с &laquo;выделенными&raquo; предметами. Подробнее тут: [item](../item).