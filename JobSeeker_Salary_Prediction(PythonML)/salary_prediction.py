# Simple linear regression(Salary Prediction)

#Importing the libraries
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

#importing our dataset
dataset=pd.read_csv(r'C:\Users\maximus\Documents\DOCTYPE\Salary_Data.csv')

#view your dataset
dataset.head()
dataset.tail()

#splitting into dependent and independent variables
x=dataset.iloc[:,:-1].values
y=dataset.iloc[:,1].values
print(x)
#splitting our data into test and training set
from sklearn.model_selection import train_test_split
x_train,x_test,y_train,y_test=train_test_split(x,y,test_size=0.3,random_state=0)

#import the linear regressor
from sklearn.linear_model import LinearRegression
regressor=LinearRegression()
regressor.fit(x_train,y_train)

#fill empty spaces
dataset.fillna(dataset['Annual Salary(Naira)']).mean()
dataset.fillna(dataset[:]).mean()
dataset

#predicting the model

y_pred=regressor.predict(x_train)
y_pred
#Visualising the model
plt.scatter(x_train,y_train,color='red')
plt.plot(x_train,y_pred,color='blue')
plt.title('Salary vs Experience Training set')
plt.xlabel(" years of experience ")
plt.ylabel("Salary prediction")
plt.show()
