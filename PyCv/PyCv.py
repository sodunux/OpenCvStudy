import cv2 as cv 
import numpy as np 

class PyCv:
	def __init__(self):
		#sFace=cv.imread("res/face.jpg")
		#cap = cv.VideoCapture(0)
		pass
	
	def ImgDemo(self):
		img=cv.imread('res/face.jpg',0) #灰度图
		#img=cv.imread('res/face.jpg',1) #彩色图
		cv.imshow("image",img)
		cv.imwrite("facegray.png",img)
		cv.waitKey(0)
		cv.destroyAllWindows()
		pass
	
	def VideoDemo(self):
		cap=cv.VideoCapture(0)
		while(1):
			#get a frame
			ret,frame=cap.read()
			cv.imshow("capture",frame)
			#cv.imwrite('1.jpg',frame)
			if cv.waitKey(1) & 0xFF ==ord('q'):
				break
		cap.release()
		cv.destroyAllWindows()

	def DrawDemo(self):
		img=np.zeros((512,512,3),np.uint8)
		#cv.line(img,(0,0),(511,511),(255,0,0),5)
		#cv.rectangle(img,(384,0),(510,128),(0,255,0),3)
		#cv.circle(img,(447,63), 63, (0,0,255), -1)
		#cv.ellipse(img,(256,256),(100,50),0,0,180,255,-1)
		font = cv2.FONT_HERSHEY_SIMPLEX
		cv.imshow("DrawLine",img)
		cv.waitKey(0)



	def Demo(self):
		#self.ImgDemo()
		self.DrawDemo()
		pass

if __name__ == '__main__':
	pc=PyCv()
	pc.Demo()