const { request } = require('express');
var express = require('express');
var router = express.Router();

/* GET users listing. */
router.get('/new', function(req, res, next) {
  res.render('new');
});

module.exports = router;
