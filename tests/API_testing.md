***Testing the algorithm using a sanbox API***

***API: https://testweaapi.refunction.repl.co/data.json***
<h1 style="color:green;">Test 1</h1> 



<h4>Given data: </h4>

```javascript
{
  [Desc: "Clear weather"]
  [Temp: "10.29"]
  [Humidity: "50%"]
}
```
<h4>Expected results: </h4>

```row
===================
clear sky
10.29 C,  
50.00% 
====================
Supplying water was skipped.
====================
Humidity is ideal
====================
Temperature is low, lights are now on.
====================

```

<h4>Actual results: </h4>

```row
===================
clear sky
10.29 C,  
50.00% 
====================
Supplying water was skipped.
====================
Humidity is ideal
====================
Temperature is low, lights are now on.
====================
```

***Test is successful***

<h1 style="color:green;">Test 2</h1>


```javascript
{
  [Desc: "Clear weather"]
  [Temp: "51.29"]
  [Humidity: "98%"]
}
```

<h4>Given data: </h4>

```row
===================
clear sky
51.29 C,  
98.00% 
====================
High temperature detected, Supplying extra water.
====================
Humidity is high, fan have been turned on.
====================
Temperature is high, fans gave been turned on.
====================
```

<h4>Actual results: </h4>


```row
===================
clear sky
51.29 C,  
98.00% 
====================
High temperature detected, Supplying extra water.
====================
Humidity is high, fan have been turned on.
====================
Temperature is high, fans have been turned on.
====================
```


<hr>




***Test is successful***
