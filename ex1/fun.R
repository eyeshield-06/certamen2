media <- function(x){
    .C('mean',
       as.double(x),
       as.integer(length(x)),
       mean = as.double(0))$mean
}
