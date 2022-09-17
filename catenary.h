// Catenary
// Credits: Endagma
// https://entagma.com

function float catenary(float curveu; vector pos; float a) {
  float x = fit01(curveu, -1, 1);

  float y = a * cosh(x / 2);
  float offsetY  =  a * cosh(1 / 2);

  pos.y += y;
  pos.y -= offsetY;
  float finalPos = pos.y;
  return finalPos;
}