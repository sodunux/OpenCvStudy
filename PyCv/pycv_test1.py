import cv2 as cv 
img=cv.imread("res/face.jpg")
cv.imshow("Image",img)
cv.waitKey()
cv.destroyAllWindows()