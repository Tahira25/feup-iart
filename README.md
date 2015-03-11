# FEUP-IART

A repository to host IART projects.


## 1. Parkinson's disease <img src="res/pd-logo.jpg" height="50" >

Parkinson's disease (PD) is a degenerative disorder of the central nervous system.

Early in the course of the disease, the most obvious symptoms are movement-related; these include shaking, rigidity, slowness of movement and difficulty with walking and gait.

<img src="res/parkinsons-symptoms.jpg" height="350" >

Later, thinking and behavioral problems may arise, with dementia commonly occurring in the advanced stages of the disease, whereas depression is the most common psychiatric symptom.


## 2. Parkinson's disease speech data set

[UCI Machine Learning Repository][2] provides multiple types of sound recordings of Parkinson speech.


### 2.1. Data set information

The PD database consists of **training** and **test** files.

#### 2.1.A Training data

The training data contains **40 entries**:

- **20** ill individuals
  - **6** female <img src="res/female-sign.png" height="20" >
  - **14** male <img src="res/male-sign.png" height="20" >

- **20** healthy individuals
  - **10** female <img src="res/female-sign.png" height="20" >
  - **10** male <img src="res/male-sign.png" height="20" >

Multiple types of sound recordings (26 voice samples including sustained vowels, numbers, words and short sentences) are taken from all subjects. A group of 26 linear and time frequency based features are extracted from each voice sample. The UPDRS score of each patient (which is determined by an expert physician) is also available in the dataset. Therefore, this dataset can also be used for regression. 


#### 2.1.B Test data

After collecting the training dataset which consists of multiple types of sound recordings and performing our experiments, in line with the obtained findings we continued collecting an independent test set from PWP via the same physician's examination process under the same conditions. During the collection of this dataset, 28 PD patients are asked to say only the sustained vowels 'a' and 'o' three times respectively which makes a total of 168 recordings. The same 26 features are extracted from voice samples of this dataset. This dataset can be used as an independent test set to validate the results obtained on training set. 


### 2.2. Data set syntax

#### 2.2.A Common syntax

###### Subject ID

| Column 0   |
|:----------:|
| 1          |


###### Jitter

| Column 1 | Column 2        | Column 3 | Column 4 | Column 5 |
|:--------:|:---------------:|:--------:|:--------:|:--------:|
| local    | local, absolute | rap      | ppq5     | ddp      |
| 1.488    | 0.000090213     | 0.9      | 0.794    | 2.699    |


###### Shimmer

| Column 6 | Column 7  | Column 8 | Column 9 | Column 10 | Column 11 |
|:--------:|:---------:|:--------:|:--------:|:---------:|:---------:|
| local    | local, dB | apq3     | apq5     | apq11     | dda       |
| 8.334    | 0.779     | 4.517    | 4.609    | 6.802     | 13.551    |


###### AC, NTH, NTH

| Column 12 | Column 13 | Column 14 |
|:---------:|:---------:|:---------:|
| AC        | NTH       | HTN       |
| 0.905905  | 0.119116  | 11.13     |


###### Pitch

| Column 15    | Column 16  | Column 17          | Column 18     | Column 19     |
|:------------:|:----------:|:------------------:|:-------------:|:-------------:|
| Median pitch | Mean pitch | Standard deviation | Minimum pitch | Maximum pitch |
| 166.533      | 164.781    | 10.421             | 142.229       | 187.576       |


###### Pulses and periods

| Column 20        | Column 21         | Column 22   | Column 23                    |
|:----------------:|:-----------------:|:-----------:|:----------------------------:|
| Number of pulses | Number of periods | Mean period | Standard deviation of period |
| 160              | 159               | 0.006064725 | 0.000416276                  |


###### Voice breaks

| Column 24                           | Column 25              | Column 26              |
|:-----------------------------------:|:----------------------:|:----------------------:|
| Fraction of locally unvoiced frames | Number of voice breaks | Degree of voice breaks |
| 0                                   | 0                      | 0                      |


#### 2.2.B Training data specific syntax

###### UPDRS and class information

| Column 27 | Column 28         |
|:---------:|:-----------------:|
| UPDRS     | Class information |
| 23        | 1                 |


#### 2.2.C Test data specific syntax

###### Class information

| Column 27         |
|:-----------------:|
| Class information |


## 3. Parkinson's disease diagnosis application


## 4. Abbreviation meanings

*PD* - Parkinson's Disease  
*PWP* - People With Parkinson's disease  
*UPDRS* - Unified Parkinson's Disease Rating Scale


## 5. Troubleshooting

#### Eclipse "Problems" tab shows errors but compiles

- Go to **Project > Properties > C/C++ General > Preprocessor Include Paths, Macros Etc.**
- Switch to the **Providers** tab
- Select **CDT GCC Built-in Compiler Settings**
- Click the link **Workspace Settings**
- Select **CDT GCC Built-in Compiler Settings** (again)
- Under **Command to get compiler specs:** add **-std=c++11**


## 6. References

- http://en.wikipedia.org/wiki/Parkinson%27s_disease
- http://archive.ics.uci.edu/ml/datasets/Parkinson+Speech+Dataset+with++Multiple+Types+of+Sound+Recordings

[1]: http://en.wikipedia.org/wiki/Parkinson%27s_disease
[2]: http://archive.ics.uci.edu/ml/datasets/Parkinson+Speech+Dataset+with++Multiple+Types+of+Sound+Recordings

---

Further details are contained in the following reference. If you use the dataset, please cite: 
Erdogdu Sakar, B., Isenkul, M., Sakar, C.O., Sertbas, A., Gurgen, F., Delil, S., Apaydin, H., Kursun, 
O., 'Collection and Analysis of a Parkinson Speech Dataset with Multiple Types of Sound 
Recordings', IEEE Journal of Biomedical and Health Informatics, vol. 17(4), pp. 828-834, 2013 
