# timer
Триггер **timer** срабатывает после вызова функций [timer](../global/timer.md)() ou [loop_timer](../global/loop_timer.md)().

## Parâmetros
### timer_id
Tipo *number*. **Parâmetro obrigatório**. Идентификатор таймера. Подробнее об этом параметре читайте в статье о триггере [server_timer](../_triggers/server_timer.md).

## Notas
Обратите внимание, что после телепортации оставшееся время в таймере обнуляется. Следовательно, se игрок выйдет из игры, então таймер не сработает.