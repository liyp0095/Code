#!/usr/bin/env python3
# coding=utf-8
#__author__='__tree__'
from bs4 import BeautifulSoup
from urllib.request import urlopen
from selenium import webdriver
import os
import threading
import re

def main():
    driver = webdriver.PhantomJS(executable_path='/opt/phantomjs/phantomjs')#浏览器的地址
    driver.get("https://mm.taobao.com/search_tstar_model.htm?")#目标网页地址
    # bsObj=BeautifulSoup(driver.page_source,"lxml")#解析html语言

if __name__ == "__main__":
    main()
