(function (win, doc) {
  'use strict';
  if (!win.addEventListener) {
    return;
  }
  var linkclass = 'control',
    activeclass = 'active',
    enhanceclass = 'enhanced',
    toggleClassName = function (element, toggleClass) {
      var reg = new RegExp('(\\s|^)' + toggleClass + '(\\s|$)');
      if (!element.className.match(reg)) {
        element.className += ' ' + toggleClass;
      } else {
        element.className = element.className.replace(reg, '');
      }
    },
    navListener = function (ev) {
      ev = ev || win.event;
      var target = ev.target || ev.srcElement;
      if (target.className.indexOf(linkclass) !== -1) {
        ev.preventDefault();
        toggleClassName(doc.body, activeclass);
      }
    };
  doc.documentElement.className += ' ' + enhanceclass;
  doc.addEventListener('click', navListener, false);
}(this, this.document));
