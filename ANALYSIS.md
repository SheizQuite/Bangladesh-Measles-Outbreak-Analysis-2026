# Bangladesh Measles Outbreak - 2026 Analysis

## Measles: What, Why and How
Bangladesh is facing a measles outbreak in 2026 with confirmed measles cases reported across divisions and age groups. 
Knowing what measles is, how measles spreads and the common measles symptoms gives context for studying the outbreak data.
Measles is caused by the measles virus, which belongs to the Paramyxoviridae family. 
Measles spreads easily from a person to others via respiratory droplets from coughing and sneezing and also through close contact.
Symptoms of measles usually show up about 8–12 days after measles infection. Common measles symptoms include:
- fever
- Dry cough
- Runny nose
- Red or watery eyes (conjunctivitis)
- Small white spots inside the mouth (Koplik spots)
- A red rash that starts on the face and spreads across the body

## Methodology
The project followed a step-by-step approach to process and analyze the 2026 Bangladesh measles outbreak dataset.
1. Data Collection:
I collected measles outbreak data from available sources such as MOHFW, the DGHS National Surveillance Hub and Prothom Alo. The collected measles information was organized into a CSV dataset.
2. Data Input:
The C program I wrote reads the CSV file using file handling functions like `fopen()` and `fgets()`.
3. Data Processing:
The program also uses string handling and conversion functions such as `strtok()` `strcpy()` `strcmp()` and `atoi()` to pull out and process the date division, age group confirmed measles cases and measles fatalities.
4. National-level Analysis:
Moreover the program calculates the confirmed measles cases and measles fatalities across the eight divisions and determines the national Case Fatality Rate (CFR).
5. **Division-wise Analysis:**
   I calculated confirmed cases and fatalities for all eight divisions. The program also calculates the CFR for each division and ranks divisions from highest to lowest based on confirmed cases and fatalities using sorting.
6. **Age-wise Analysis:**
   The data is grouped into three age categories: `<5 years`, `5–15 years`, and `15+ years`. Confirmed cases, fatalities, and CFR are calculated for each age group, followed by ranking based on cases and fatalities.
7. **Data Visualization:**
   The processed results were used to prepare data files and create graphs with GNUplot to visually represent division-wise and age-wise patterns in the outbreak.
8. **Result Presentation:**
   The calculated results and visualizations are presented in this repository to provide a structured overview of the 2026 measles outbreak data in Bangladesh.

## Analysis and Key Findings
The analysis recorded a total of **21,392 confirmed measles cases and 101 fatalities** across Bangladesh leading to a Case Fatality Rate (CFR) of **0.47%**.
At the division level **Dhaka recorded the highest number of confirmed cases (13,269) and fatalities (64)**. Chittagong had 3,030 confirmed cases and 10 fatalities while Rajshahi reported 1,420 cases. 
**Barishal recorded 806 confirmed cases and had a relatively higher CFR of 2.36%**, which is much higher than the national CFR of 0.47%. Khulna and Rangpur recorded no fatalities in this dataset meaning their CFR was 0.00%.
In the age- analysis a clear pattern emerged with most reported cases occurring among children under 5 years. The **<5 years age group accounted for 17,323 confirmed cases and 83 fatalities** while 
those aged 5–15 years had 2,775 cases and 8 fatalities. 
For those 15 years and older there were 1,294 cases and 10 fatalities.
Among these age groups the **15+ years group had the CFR at 0.77%** followed by the <5 years group at 0.48% and the 5–15 years group at 0.29%.
Overall the analysis highlights variation in reported measles cases, fatalities and Case Fatality Rate across divisions and age groups, during the analyzed period.

## Why Were Confirmed Cases and Fatalities Noticeably Higher in Dhaka?
Dhaka,the capital city of Bangladesh, recorded noticeably higher confirmed cases and fatalities than the other divisions in this dataset. This raises an important question: why?
According to the data available up to **30 September 2026**, Dhaka Division recorded more than **13,000 confirmed measles cases**, while Khulna and Rangpur recorded **491 and 544 confirmed cases**, respectively.
There are several possible factors that may contribute to this difference.
* **Rapid Transmission:** Measles is a highly contagious airborne disease with a very high basic reproduction number (R₀ ≈ 12–18). According to reports from the World Health Organization (WHO), 
transmission has been particularly high in densely populated slum and low-income areas of Dhaka, 
such as Demra, Jatrabari, Kamrangirchar, Korail, Mirpur, and Tejgaon.
* **Geographical Factors:** In rural and semi-urban areas of Rangpur and Khulna, residential areas are generally more spread out. In contrast, overcrowding in Dhaka's densely populated settlements can make physical distancing difficult, 
potentially allowing the virus to spread more rapidly.
* **Dhaka's Mobile Population:** On the other hand, the large floating, temporary, and slum-dwelling population in Dhaka can make it difficult for city health departments to maintain accurate records and ensure consistent vaccination coverage.
Some mobile populations may be missed by routine vaccination programs, 
potentially creating pockets of people who remain susceptible to measles transmission.
A very important factor to consider when interpreting the fatality data is how deaths are recorded.
* **Complexity in Fatality Reporting:** If a patient from outside Dhaka is transferred to Dhaka in critical condition and dies there, the death may be recorded under Dhaka in some reporting systems. 
This could contribute to a higher reported number of fatalities in Dhaka and should be considered when interpreting the division-wise fatality data.

## Interpretation
The factors mentioned above are **explanations** for the differences seen in the data but they do not provide final answers. The dataset includes information on confirmed cases, deaths, divisions and age groups. 
However it does not include details about population density, vaccination rates, access to healthcare, movement of people or where patients first got infected. 
Because of these missing elements it is not possible to know why there are differences in reported cases and deaths, across divisions. More data would be needed to figure out the causes.

## Summary
This project provided a data-based overview of the 2026 measles outbreak in Bangladesh using C programming. By analyzing confirmed cases, fatalities and Case Fatality Rates across divisions and 
age groups project was able to identify differences in the reported outbreak patterns.
The analysis also helped project practice working with CSV files, processing data, 
sorting results calculating statistics and creating visualizations using C and GNUplot.The findings should be interpreted within the limitations of the dataset. 
Further analysis with data on vaccination coverage population density, healthcare access and population movement could provide a deeper understanding of the factors, behind the observed differences.












