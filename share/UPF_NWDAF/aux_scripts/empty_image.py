from PIL import Image
from io import BytesIO

width = 1000
height = 500
    
# Create a new empty image
image = Image.new("RGB", (width, height), color="white")
    
image.save("image.png")
