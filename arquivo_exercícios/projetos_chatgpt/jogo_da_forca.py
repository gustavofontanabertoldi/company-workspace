import random
from nltk.corpus import words

def random_word_simple (quantidade):
    import nltk
    nltk.download('words')

    word_list = words.words

    random_words = random.sample(word_list, quantidade)

    return random.choice(random_words)

print(f"palavra escolhida: {random_word_simple}")