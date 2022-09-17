// Subdivide grid
// Credits: Endagma
// https://entagma.com

function void subdivide(vector bbMin; vector bbMax; float cutPosition; int cutDirectionIsVertical ) {
  vector cutLine = lerp(bbMin, bbMax, cutPosition);
  vector pos;
  int newPt;
  if (cutDirectionIsVertical == 1) {
    // Add first quad
    int newPrim = addprim(0, "poly");
    pos = bbMin;
    newPt = addpoint(0, pos);
    addvertex(0, newPrim, newPt);

    pos = set(cutLine.x, bbMin.y, bbMin.z);
    newPt = addpoint(0, pos);
    addvertex(0, newPrim, newPt);

    pos = set(cutLine.x, bbMin.y, bbMax.z);
    newPt = addpoint(0, pos);
    addvertex(0, newPrim, newPt);

    pos = set(bbMin.x, bbMin.y, bbMax.z);
    newPt = addpoint(0, pos);
    addvertex(0, newPrim, newPt);

    // Add second quad
    newPrim = addprim(0, "poly");
    pos = set(cutLine.x, bbMin.y, bbMin.z);
    newPt = addpoint(0, pos);
    addvertex(0, newPrim, newPt);

    pos = set(bbMax.x, bbMin.y, bbMin.z);
    newPt = addpoint(0, pos);
    addvertex(0, newPrim, newPt);

    pos = set(bbMax.x, bbMin.y, bbMax.z);
    newPt = addpoint(0, pos);
    addvertex(0, newPrim, newPt);

    pos = set(cutLine.x, bbMin.y, bbMax.z);
    newPt = addpoint(0, pos);
    addvertex(0, newPrim, newPt);
  } else {
    // Add first quad
    int newPrim = addprim(0, "poly");

    pos = bbMin;
    newPt = addpoint(0, pos);
    addvertex(0, newPrim, newPt);

    pos = set(bbMax.x, bbMin.y, bbMin.z);
    newPt = addpoint(0, pos);
    addvertex(0, newPrim, newPt);

    pos = set(bbMax.x, bbMin.y, cutLine.z);
    newPt = addpoint(0, pos);
    addvertex(0, newPrim, newPt);

    pos = set(bbMin.x, bbMin.y, cutLine.z);
    newPt = addpoint(0, pos);
    addvertex(0, newPrim, newPt);

    // Add second quad
    newPrim = addprim(0, "poly");
    pos = set(bbMin.x, bbMin.y, cutLine.z);
    newPt = addpoint(0, pos);
    addvertex(0, newPrim, newPt);

    pos = set(bbMax.x, bbMin.y, cutLine.z);
    newPt = addpoint(0, pos);
    addvertex(0, newPrim, newPt);

    pos = bbMax;
    newPt = addpoint(0, pos);
    addvertex(0, newPrim, newPt);

    pos = set(bbMin.x, bbMin.y, bbMax.z);
    newPt = addpoint(0, pos);
    addvertex(0, newPrim, newPt);
  }
}