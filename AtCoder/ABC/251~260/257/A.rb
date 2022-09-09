N, X = gets.split.map(&:to_i)
i = (1.0*X / N).ceil
puts ('A'..'Z').to_a[i]
