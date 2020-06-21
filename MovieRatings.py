import requests
from bs4 import BeautifulSoup
url = "https://www.imdb.com/title/tt0468569/?ref_=fn_al_tt_1"
source = requests.get(url)
bs = BeautifulSoup(source.text, "lxml")
rating = bs.find(class_="ratingValue")
rating = str(rating.text)
summary = bs.find(class_="summary_text")
title = bs.find(class_="title_wrapper")
print(title.text)
print('\t' + summary.text)
print(rating)