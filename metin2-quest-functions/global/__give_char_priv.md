# __give_char_priv()
A função **__give_char_priv** define персонажу, вызвавшему эту функцию, определенную персональную квоту.

## Parâmetros da função
### priv_id
Tipo *number*. **Parâmetro obrigatório**. ID da quota. `1` &mdash; дроп; `2` &mdash; янги; `3` &mdash; большие кучки янг; `4` &mdash; опыт.

### priv_value
Tipo *number*. **Parâmetro obrigatório**. Qual a percentagem da quota que será definida персонажу. Valores superiores a `1000` serão provavelmente reduzidos para `1000`.

## Notas
A função **não** pode ser chamada anonimamente.

Неизвестно, как долго у персонажа будет эта квота, поскольку параметра, отвечающего за длительность квоты, у этой функции нет.

Возможно, что эта функция вообще не работает.