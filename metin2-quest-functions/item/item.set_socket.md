# item.set_socket()
A função **item.set_socket** altera значение сокета.

## Parâmetros da função
### socket
Tipo *number*. **Parâmetro obrigatório**. ID сокета.

### socket_value
Tipo *number*. **Parâmetro obrigatório**. Значение, которое будет присвоено сокету.

## Notas
A função **não** pode ser chamada anonimamente.

Эта функция работает не во всех случаях. Например, se попытаться с её помощью изменить длительность рафинада в бижутерии, então ничего не выйдет &mdash; изменения не сохраняются. Поэтому перед ее использованием проверьте, будет ли она работать так, как вы задумали. Для проверки достаточно перезайти в игру после вызова функции и проверить, сохранouсь ли изменения в предмете.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).