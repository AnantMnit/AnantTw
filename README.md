# Vector Dot product 
## C++ implementation
The vector dot product is a fundamental operation in linear algebra that calculates the scalar product of two vectors. It is computed by summing the products of their corresponding components.

- The vector dot product is calculated as the sum of the element-wise products of two vectors
- It results in a scalar value, often used in determining the angle between vectors or in projecting one vector onto another
- ✨Magic ✨
---
## Features

- The **vector dot product** is computed as the sum of element-wise products of two vectors:  
  $$\mathbf{a} \cdot \mathbf{b}$$ = $$\sum_{i=1}^{n}$$ $$a_i b_i$$

- It results in a ***scalar value***, commonly used to determine the angle between vectors or for projections.

- If the dot product is **zero**, it implies that the vectors are *orthogonal* (perpendicular to each other).
---

# Quote from the great XYZ

> "The dot product is a crucial operation in mathematics, providing insights into vector relationships and geometry."



This text you see here is *actually- written in Markdown! To get a feel
for Markdown's syntax, type some text into the left window and
watch the results in the right.
---
# image supporting my argument:
- The **dot product** of two vectors **u** and **v** is given by:  
  `u . v = ||u|| ||v|| cos(theta)`,  
  where `theta` is the angle between the vectors.

- The **dot product** can be interpreted geometrically as the product of the magnitudes of the vectors and the cosine of the angle between them.

- If the dot product is **positive**, the angle between the vectors is acute (less than 90°).  
- If the dot product is **negative**, the angle is obtuse (greater than 90°).

> "Dot products are widely used in physics, computer graphics, and machine learning for understanding relationships between vectors."

![Dot Product Explanation](https://betterexplained.com/wp-content/webp-express/webp-images/uploads/dotproduct/dot_product_components.png.webp)
---

## To do list
### List of Tasks:

- [ ] **Task 1**: Write explanation for the dot product
- [ ] **Task 2**: Insert image for dot product
- [ ] **Task 3**: Provide example usage of dot product in a real-world context
- [ ] **Task 4**: Verify the correct formatting in the preview
- [ ] **Task 5**: Share the final document for review

---
# Footnotes example
### Explanation of the Dot Product

The **dot product** of two vectors is often used to calculate the **projection** of one vector onto another[^1].

- If the dot product is **positive**, the angle between the vectors is acute.
- If the dot product is **negative**, the angle is obtuse[^2].

[^1]: The dot product projection is a measure of how much one vector extends in the direction of another.
[^2]: A negative dot product indicates that the vectors are pointing in opposite directions.
---
# links to support

Check out the section on [Dot Product Explanation](https://en.wikipedia.org/wiki/Dot_product) for detailed information.

---
## Alerts
> [!Warning]
> The dot product will be negative if the vectors are pointing in opposite directions. 
> [Note]
> This can happen if the angle between the vectors exceeds 90 degrees.
> [Tip]: To calculate the angle between vectors, use the formula `cos(theta) = (u . v) / (||u|| ||v||)`.

---
# Vector Dot Product Example
### Vector Dot Product Example

The following table shows examples of two vectors and their corresponding dot products.

| Vector A          | Vector B          | Dot Product (A . B)                                  |
|-------------------|-------------------|------------------------------------------------------|
| (1, 2, 3)         | (4, -5, 6)        | (1 * 4) + (2 * -5) + (3 * 6) = 4 - 10 + 18 = 12     |
| (2, 3, 4)         | (5, 6, 7)         | (2 * 5) + (3 * 6) + (4 * 7) = 10 + 18 + 28 = 56     |
| (-1, 0, 1)        | (0, 1, -1)        | (-1 * 0) + (0 * 1) + (1 * -1) = 0 + 0 - 1 = -1      |

---

### Key Points:
- The **dot product** is calculated by multiplying corresponding components of the vectors and then summing the results.
- If the dot product is **positive**, the vectors point in a similar direction.
- If the dot product is **zero**, the vectors are orthogonal (perpendicular).
- If the dot product is **negative**, the vectors point in opposite directions.

---
# Code for dot product
## C++ implementation
```cpp
#include <iostream>
#include <vector>

using namespace std;

// Function to calculate dot product of two vectors
int dotProduct(const vector<int>& A, const vector<int>& B) {
    int result = 0;
    for (size_t i = 0; i < A.size(); ++i) {
        result += A[i] * B[i];
    }
    return result;
}

int main() {
    vector<int> A = {1, 2, 3};
    vector<int> B = {4, -5, 6};
    
    int result = dotProduct(A, B);
    
    cout << "Dot Product: " << result << endl;
    return 0;
}
