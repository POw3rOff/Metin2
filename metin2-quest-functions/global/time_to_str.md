# time_to_str()
Функция **time_to_str** конвертирует время, указанное в виде unix-таймштампа, в читаемый вид.

## Parâmetros da função
### unix_timestamp
Tipo *number*. **Parâmetro obrigatório**. Quantidade de segundos с начала эпохи Unix.

## Valores de retorno
### date
Tipo *string*. Дата, отформатированная в виде `%a %b %d %H:%M:%S %Y`.

* `%a` &mdash; название дня недели из трех букв с заглавной буквы, например `Thu`;
* `%b` &mdash; название месяца из трех букв с заглавной буквы, например `Jan`;
* `%d` &mdash; день месяца без ведущего нуля, например `1`;
* `%H` &mdash; час в 24-часовом формате (от 00 до 23) с ведущим нулем, например `22`;
* `%M` &mdash; минута с ведущим нулем, например `03`;
* `%S` &mdash; секунда с ведущим нулем, например `48`;
* `%Y` &mdash; полная запись номера года, например `2012`.

## Notas
A função pode ser chamada anonimamente.