/**
 * AccessibleImage_ref:
 * @obj: a pointer to the #AccessibleImage implementor on which to operate.
 *
 * Increment the reference count for an #AccessibleImage object.
 *
 * Returns: (no return code implemented yet).
 *
 **/
int
AccessibleImage_ref (AccessibleImage *obj)
{
  Accessibility_Image_ref (*obj, &ev);
  return 0;
}



/**
 * AccessibleImage_unref:
 * @obj: a pointer to the #AccessibleImage implementor on which to operate.
 *
 * Decrement the reference count for an #AccessibleImage object.
 *
 * Returns: (no return code implemented yet).
 *
 **/
int
AccessibleImage_unref (AccessibleImage *obj)
{
  Accessibility_Image_unref (*obj, &ev);
  return 0;
}


/**
 * AccessibleImage_getImageDescription:
 * @obj: a pointer to the #AccessibleImage implementor on which to operate.
 *
 * Get the description of the image displayed in an #AccessibleImage object.
 *
 * Returns: a UTF-8 string describing the image.
 *
 **/
char *
AccessibleImage_getImageDescription (AccessibleImage *obj)
{
  return (char *)
    Accessibility_Image__get_imageDescription (*obj, &ev);
}



/**
 * AccessibleImage_getImageSize:
 * @obj: a pointer to the #AccessibleImage to query.
 * @width: a pointer to a #long into which the x extents (width) will be returned.
 * @height: a pointer to a #long into which the y extents (height) will be returned.
 *
 * Get the size of the image displayed in a specified #AccessibleImage object.
 *
 **/
void
AccessibleImage_getImageSize (AccessibleImage *obj,
                              long int *width,
                              long int *height)
{
  Accessibility_Image_getImageSize (*obj,
				    (CORBA_long *) width, (CORBA_long *) height, &ev);
}



/**
 * AccessibleImage_getImagePosition:
 * @obj: a pointer to the #AccessibleImage implementor to query.
 * @x: a pointer to a #long into which the minimum x coordinate will be returned.
 * @y: a pointer to a #long into which the minimum y coordinate will be returned.
 * @ctype: the desired coordinate system into which to return the results,
 *         (e.g. SPI_COORD_TYPE_WINDOW, SPI_COORD_TYPE_SCREEN).
 *
 * Get the minimum x and y coordinates of the image displayed in a
 *         specified #AccessibleImage implementor.
 *
 **/
void
AccessibleImage_getImagePosition (AccessibleImage *obj,
                                  long *x,
                                  long *y,
                                  AccessibleCoordType ctype)
{
  Accessibility_Image_getImagePosition (*obj,
					(CORBA_long *) x, (CORBA_long *) y, (CORBA_short) ctype,
					&ev);
}