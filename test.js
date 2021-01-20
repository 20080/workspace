 var present = (function() {
 var book = 0;
 function change(val) {
 book += val;
 }
 return {
 increment: function() {
 change(1);
 },
 decrement: function() {
 change(-1);
 },
 value: function() {
 return book;
 }
 }; 
 })();
 
 document.write(present.value());
 present.increment();
 present.increment();
 document.write(present.value());
 present.decrement();
 document.write(present.value());