# get_quest_state()
Функция **get_quest_state** сообщает ID стадии определенного квеста.

## Параметры функции
### quest_name
Тип *string*. **Обязательный параметр**. Название квеста. Нужно указать не название квестового файла, а то, как вы назвали квест в конструкции `quest ... begin`.

## Возвращаемые значения
### state_id
Тип *number*. ID стадии квеста. Если функция была вызвана через [server_timer](../triggers/server_timer.md) или если квеста с заданным именем не существует, то возвращается `0`. Если параметр [quest_name](#quest_name) не является строкой, то функция вообще ничего не возвращает.

## Примечания
Функция **не** может быть вызвана анонимно.

Неизвестно, по какому принципу получается ID стадии.