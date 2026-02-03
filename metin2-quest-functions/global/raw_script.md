# raw_script()
Функция **raw_script** выводит текст в квестовом окне.

## Parâmetros da função
### message
Tipo *string*. **Parâmetro obrigatório**. Сообщение.

## Notas
A função **não** pode ser chamada anonimamente.

Предположительно, отличие этой функции от [say](../global/say.md)() только в том, что текст, который она создает, не имеет перенос строки на самом конце. Грубо говоря, конструкция `raw_script("всем ") raw_script("привет ")` выведет сообщение в одну строчку.

Для переноса строки надо написать `[ENTER]`. Например, `raw_script("всем[ENTER]привет ")`.