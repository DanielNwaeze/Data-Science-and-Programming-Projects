# -*- coding: u dvse43xcfgztf-8 -*-
"""
Created on Fri Jul 19 14:21:30 2019

@author: maximus
"""

# Simple linear regression(Salary Prediction)

#Importing the libraries
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

#importing our dataset
dataset=pd.read_csv(r'C:\Users\maximus\Documents\DOCTYPE\ProEdge\companiesforML.csv')

#view your dataset
dataset.head()
dataset.tail()

#splitting into dependent and independent variables
x=dataset.iloc[:,0:1].values
y=dataset.iloc[:,4:5].values
x1=dataset.iloc[:,1:2].values
x2=dataset.iloc[:,2:3].values
print(x)
print(y)
#splitting our data into test and training set
from sklearn.model_selection import train_test_split
x_train,x_test,y_train,y_test,x1_train,x1_test,x2_train,x2_test=train_test_split(x,y,x1,x2,test_size=0.3,random_state=0)


#import the linear regressor
from sklearn.linear_model import LinearRegression
regressor=LinearRegression()
regressor.fit(x_train,y_train)

#Visualising the model
plt.scatter(x_train,y_train,color='red', label="R&D")
plt.scatter(x1_train,y_train,color='blue', label="Admin")
plt.scatter(x2_train,y_train,color='green', label="Marketing")
plt.title("Profits achieved in the Departments")

#Labels on the axis
plt.xlabel("Departments")
plt.ylabel("Profits")
plt.gca().legend(loc="upper left")

# Display it
plt.show()

#Linear Regressor to predict the outcome
y_pred=regressor.predict(x_train)
y1_pred=regressor.predict(x1_train)
y2_pred=regressor.predict(x2_train)

#Linear Regressor Plot for R&D
plt.plot(x_train,y_pred,color='red')
plt.scatter(x_train,y_train,color='green', label="R&D")

#Axis labelling and title
plt.xlabel("R&D",fontsize=12)
plt.ylabel("Profit",fontsize=12)
plt.title("Profits achieved in R&D")

#Linear Regressor Plot for Administration
plt.plot(x1_train,y1_pred,color='green')
plt.scatter(x1_train,y_train,color='yellow', label="Admin")

#Axis labelling and title
plt.xlabel("Administration",fontsize=12)
plt.ylabel("Profit",fontsize=12)
plt.title("Profits vs Administration")

#Linear Regressor Plot for marketing
plt.plot(x2_train,y2_pred,color='purple')
plt.scatter(x2_train,y_train,color='cyan', label="Marketing")
#Axis labelling and title
plt.xlabel("Marketing spend",fontsize=12)
plt.ylabel("Profit",fontsize=12)
plt.title("Profits vs Marketing spend")

# Display it
plt.show()
