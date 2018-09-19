import cv2 as cv 
cap=cv.VideoCapture(0)
while(1):
	#get a frame
	ret,frame=cap.read()
	cv.imshow("capture",frame)
	cv.imwrite('1.jpg',frame)
	if cv.waitKey(1) & 0xFF ==ord('q'):
		break
cap.release()
cv.destroyAllWindows()