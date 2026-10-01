# Bangladesh Measles Outbreak - 2026 Analysis

## Project Overview
In this project, I used a C program to analyze the 2026 measles outbreak in Bangladesh using a CSV dataset. The analysis calculates national totals and examines confirmed cases, fatalities, and Case Fatality Rate (CFR) by division (8 divisions) and age group (<5, 5–15, and 15+ years). The project also ranks divisions by confirmed cases and fatalities using sorting, demonstrating file handling, data processing, and data analysis in C.

## Goals
* Analyze the national measles outbreak data in 2026.
* Break down confirmed cases and fatalities across Bangladesh's 8 divisions.
* Analyze confirmed cases and fatalities across different age groups.
* Calculate national, division-wise, and age-wise Case Fatality Rates (CFR).

## Programming Language
 **C**

  ## What I Did
* Read and processed the measles outbreak data from a CSV file using C.
* Calculated the national total confirmed cases, fatalities, and CFR.
* Calculated confirmed cases, fatalities, and CFR for all 8 divisions.
* Ranked the 8 divisions from highest to lowest based on confirmed cases and fatalities using sorting.
* Calculated confirmed cases, fatalities, and CFR for three age groups: <5 years, 5–15 years, and 15+ years.
* Ranked the age groups from highest to lowest based on confirmed cases and fatalities.
* Prepared data files and created graphs using GNUplot to visualize the analysis.

  ## Data Source
The dataset I used in this project was collected from publicly available information published by the following sources:
* **Ministry of Health and Family Welfare (MOHFW), Bangladesh**
* **DGHS National Surveillance Hub — National Measles Outbreak 2026**
* **Prothom Alo Newspaper**

The collected data was organized into a CSV dataset and analyzed using C.


## Key Findings

### National Summary

| Metric                | Result |
| --------------------- | -----: |
| Total Confirmed Cases | 21,392 |
| Total Fatalities      |    101 |
| National CFR          |  0.47% |

### Division-wise Summary

| Division   | Confirmed Cases | Fatalities |   CFR |
| ---------- | --------------: | ---------: | ----: |
| Dhaka      |          13,269 |         64 | 0.48% |
| Chittagong |           3,030 |         10 | 0.33% |
| Rajshahi   |           1,420 |          3 | 0.21% |
| Khulna     |             491 |          0 | 0.00% |
| Barishal   |             806 |         19 | 2.36% |
| Sylhet     |           1,057 |          3 | 0.28% |
| Rangpur    |             544 |          0 | 0.00% |
| Mymensingh |             775 |          2 | 0.26% |

### Age-wise Summary

| Age Group  | Confirmed Cases | Fatalities |   CFR |
| ---------- | --------------: | ---------: | ----: |
| <5 years   |          17,323 |         83 | 0.48% |
| 5–15 years |           2,775 |          8 | 0.29% |
| 15+ years  |           1,294 |         10 | 0.77% |

### Rankings

**Confirmed Cases by Division — Highest to Lowest**

1. Dhaka — 13,269
2. Chittagong — 3,030
3. Rajshahi — 1,420
4. Sylhet — 1,057
5. Barishal — 806
6. Mymensingh — 775
7. Rangpur — 544
8. Khulna — 491

**Fatalities by Division — Highest to Lowest**

1. Dhaka — 64
2. Barishal — 19
3. Chittagong — 10
4. Rajshahi — 3
5. Sylhet — 3
6. Mymensingh — 2
7. Khulna — 0
8. Rangpur — 0

**Confirmed Cases by Age Group — Highest to Lowest**

1. <5 years — 17,323
2. 5–15 years — 2,775
3. 15+ years — 1,294

**Fatalities by Age Group — Highest to Lowest**

1. <5 years — 83
2. 15+ years — 10
3. 5–15 years — 8

## Project Status
**Completed**
