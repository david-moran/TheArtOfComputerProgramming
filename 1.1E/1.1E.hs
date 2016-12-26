gcd' :: (Integral a) => a -> a -> a
gcd' m n =
    let
        remainder = m `mod` n
    in
        if remainder == 0 then
            n
        else
            gcd' n remainder

main :: IO ()
main = do
    putStrLn $ show $ gcd' 544 119
